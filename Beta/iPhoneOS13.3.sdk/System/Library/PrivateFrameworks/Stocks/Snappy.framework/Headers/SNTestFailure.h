/*
 Image: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SNTestFailure : NSObject

{
    NSString *_message;
}

@property (copy, nonatomic, readonly) NSString *message;

- (id)initWithMessage:(id)arg1;
- (id)initWithMissingClass:(Class)arg1;

@end
