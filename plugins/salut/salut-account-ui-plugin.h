/*
 * This file is part of telepathy-accounts-kcm-plugins
 *
 * Copyright (C) 2011 Florian Reinhard <florian.reinhard@googlemail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef KCMTELEPATHYACCOUNTS_PLUGIN_SALUT_ACCOUNT_UI_PLUGIN_H
#define KCMTELEPATHYACCOUNTS_PLUGIN_SALUT_ACCOUNT_UI_PLUGIN_H

#include <KCMTelepathyAccounts/AbstractAccountUiPlugin>

#include <QtCore/QVariantList>

class SalutAccountUiPlugin : public AbstractAccountUiPlugin
{
    Q_OBJECT

public:
    SalutAccountUiPlugin(QObject *parent, const QVariantList &);
    virtual ~SalutAccountUiPlugin();

    virtual AbstractAccountUi* accountUi(const QString &connectionManager,
                                         const QString &protocol,
                                         const QString &serviceName);

private:
    Q_DISABLE_COPY(SalutAccountUiPlugin)
};


#endif // header guard
