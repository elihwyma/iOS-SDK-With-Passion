/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface AVFileProcessor : NSObject

{
    float _percentComplete;
}

+ (id)fileProcessor;

- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id *)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id *)arg3;
- (id)rentalInfo:(id)arg1;
- (id)sinfsFromFilePath:(id)arg1;
- (id)sinfInfoFromFilePath:(id)arg1;

@end
