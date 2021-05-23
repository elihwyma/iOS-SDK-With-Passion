/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKEventStore, NSString;

@interface EKSecureKeyedArchiverSerializer : NSObject

{
    EKEventStore *_eventStore;
    NSString *_version;
}

@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) NSString *version;

- (id)initWithEventStore:(id)arg1 withVersion:(id)arg2;
- (id)serializeEvent:(id)arg1 error:(id *)arg2;
- (id)deserializeData:(id)arg1 error:(id *)arg2;
- (id)versionFromData:(id)arg1 error:(id *)arg2;

@end
