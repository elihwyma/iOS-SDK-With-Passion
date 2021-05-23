/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSFilePresenterOperationRecord : NSObject

{
    NSString *operationDescription;
    long long state;
    id reactor;
}

@property (readonly) NSString *operationDescription;
@property (readonly) long long state;
@property id reactor;

+ (id)operationRecordWithDescription:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)didBegin;
- (void)didEnd;
- (void)willEnd;
- (id)_reactorQueue;

@end
