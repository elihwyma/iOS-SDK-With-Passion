/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADCachedDrawableStyle : NSObject

{
    int mFillCategory;
    unsigned long long mFillIndex;
    unsigned long long mStrokeIndex;
    unsigned long long mShadowIndex;
    unsigned char mReflectionOpacity;
    unsigned long long mTextStyleIndex;
}

@property (nonatomic, readonly) int fillCategory;
@property (nonatomic, readonly) unsigned long long fillIndex;
@property (nonatomic, readonly) unsigned long long strokeIndex;
@property (nonatomic, readonly) unsigned long long shadowIndex;
@property (nonatomic, readonly) unsigned char reflectionOpacity;
@property (nonatomic, readonly) unsigned long long textStyleIndex;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFillCategory:(int)arg1 mFillIndex:(unsigned long long)arg2 strokeIndex:(unsigned long long)arg3 shadowIndex:(unsigned long long)arg4 reflectionOpacity:(unsigned char)arg5 textStyleIndex:(unsigned long long)arg6;

@end
