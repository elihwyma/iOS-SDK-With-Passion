/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface ASEventUID : NSObject

{
    NSDate *_exceptionDate;
    NSString *_uidWithoutExceptionDate;
    _Bool _isOutlookCreatedUid;
}

+ (_Bool)expectsContent;
+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)parsingState;
- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (id)uidForCalFramework;
- (id)recurrenceIDForResponseEmail;
- (id)initWithCalFrameworkString:(id)arg1;
- (id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)arg1 withTimeZone:(id)arg2;
- (id)uidFromGlobalObjId:(id)arg1 outIsOutlookCreatedUid:(_Bool *)arg2;
- (id)initWithGlobalObjectIdString:(id)arg1;
- (id)initWithUidString:(id)arg1;
- (id)uidForResponseEmailWithTimeZone:(id)arg1;
- (id)uidWithoutExceptionDate;
- (id)uidForActiveSyncWithTimeZone:(id)arg1;
- (id)exceptionDate;
- (void)setExceptionDate:(id)arg1;

@end
