/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCInterestToken, NSData, NSString;

@interface FCRawFileDataProvider : NSObject

{
    _Bool _isRawFileConsumable;
    NSString *_filePath;
    FCInterestToken *_holdToken;
}

@property (nonatomic, readonly) FCInterestToken *holdToken;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) _Bool isRawFileConsumable;

- (id)init;
- (id)initWithFilePath:(id)arg1;
- (id)initWithFilePath:(id)arg1 holdToken:(id)arg2;

@end
