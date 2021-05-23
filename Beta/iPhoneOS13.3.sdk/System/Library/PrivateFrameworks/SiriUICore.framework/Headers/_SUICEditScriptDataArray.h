/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _SUICEditScriptDataArray : NSObject

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

- (long long)length;
- (id)initWithArray:(id)arg1;
- (id)stringValue;
- (id)stringAtIndex:(long long)arg1;
- (id)initWithString:(id)arg1 chunkSize:(long long)arg2;
- (long long)lengthOfItem:(long long)arg1;
- (long long)characterIndexForItem:(long long)arg1;
- (long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(_Bool)arg2 fallsOnWordBoundary:(_Bool *)arg3;

@end
