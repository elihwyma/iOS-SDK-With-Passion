/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKSource, NSString;

@interface EKNotificationCollectionOptions : NSObject

{
    EKSource *_source;
    NSString *_externalID;
    NSString *_externalIDTag;
}

@property (nonatomic, readonly) EKSource *source;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) NSString *externalIDTag;

- (id)description;
- (id)initWithExternalID:(id)arg1 externalIDTag:(id)arg2 inSource:(id)arg3;

@end
