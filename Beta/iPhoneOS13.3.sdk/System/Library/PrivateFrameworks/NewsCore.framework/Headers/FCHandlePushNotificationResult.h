/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSSet;

@interface FCHandlePushNotificationResult : NSObject <Swift>

{
    _Bool _handled;
    NSSet *_recordZoneIDs;
}

@property (nonatomic, getter=wasHandled) _Bool handled;
@property (retain, nonatomic) NSSet *recordZoneIDs;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
