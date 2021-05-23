/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSError, NSString;

@interface PKUniqueAddressField : NSObject

{
    NSString *_key;
    long long _index;
    NSError *_error;
    NSString *_invalidText;
}

@property (retain, nonatomic) NSString *key;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *invalidText;

@end
