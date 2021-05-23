/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class SBKTransaction;

__attribute__((visibility("hidden")))
@interface SBKRequestData : NSObject

{
    SBKTransaction *_transaction;
}

@property (retain) SBKTransaction *transaction;

+ (id)propertyListBodyWithTransaction:(id)arg1;

- (id)initWithTransaction:(id)arg1;
- (id)serializableRequestBodyPropertyList;

@end
