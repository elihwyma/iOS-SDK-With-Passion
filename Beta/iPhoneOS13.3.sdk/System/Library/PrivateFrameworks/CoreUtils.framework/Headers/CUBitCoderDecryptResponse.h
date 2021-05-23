/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSData;

@interface CUBitCoderDecryptResponse : NSObject

{
    NSData *_data;
    id _identifier;
}

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) id identifier;

@end
