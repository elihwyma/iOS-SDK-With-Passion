/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IDSCKNotificationInfo : NSObject

{
    _Bool _shouldSendContentAvailable;
    NSString *_alertLocalizationKey;
}

@property (copy, nonatomic) NSString *alertLocalizationKey;
@property (nonatomic) _Bool shouldSendContentAvailable;

+ (id)alloc;
+ (Class)__class;

@end
