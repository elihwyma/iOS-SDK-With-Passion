/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCInterestToken, NSData, NSString;

@interface FCANEFFileDataProvider : NSObject

{
    NSString *_filePath;
    NSData *_wrappingKey;
    long long _options;
    FCInterestToken *_holdToken;
}

@property (copy, nonatomic, readonly) NSData *wrappingKey;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly) FCInterestToken *holdToken;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) _Bool isRawFileConsumable;

- (id)initWithFilePath:(id)arg1 wrappingKey:(id)arg2 options:(long long)arg3 holdToken:(id)arg4;

@end
