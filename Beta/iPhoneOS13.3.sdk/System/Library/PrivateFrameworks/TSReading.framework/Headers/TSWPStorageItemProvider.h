/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TSWPStorageItemProvider : NSObject

{
    NSString *_string;
}

@property (copy, nonatomic) NSString *string;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)writableTypeIdentifiersForItemProvider;
+ (id)storageItemProviderWithString:(id)arg1;

- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_loadPlainTextData:(CDUnknownBlockType)arg1;

@end
