/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _EditScriptDataArray : NSObject

{
    NSArray *_data;
    NSString *_cachedStringValue;
}

@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) NSString *cachedStringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;
+ (id)EditScriptDataWithArray:(id)arg1;

- (void)dealloc;
- (long long)length;
- (id)initWithArray:(id)arg1;
- (id)stringValue;
- (id)stringAtIndex:(long long)arg1;
- (id)initWithString:(id)arg1 chunkSize:(long long)arg2;
- (long long)lengthOfItem:(long long)arg1;
- (long long)characterIndexForItem:(long long)arg1;
- (long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(_Bool)arg2;

@end
