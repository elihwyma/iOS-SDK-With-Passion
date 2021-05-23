/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DATransaction : NSObject

{
    NSString *_label;
    NSString *_transactionId;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *transactionId;

- (id)init;
- (void)dealloc;
- (id)initWithLabel:(id)arg1;

@end
