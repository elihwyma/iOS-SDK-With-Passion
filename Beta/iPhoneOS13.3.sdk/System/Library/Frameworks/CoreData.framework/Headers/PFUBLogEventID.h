/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PFUBLogEventID : NSObject

{
    NSString *_idString;
    long long _hash;
    long long _eventType;
}

@property (nonatomic, readonly) NSString *idString;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) long long eventType;

+ (void)initialize;

- (id)initWithEventType:(int)arg1;
- (id)initWithCustomKey:(id)arg1;

@end
