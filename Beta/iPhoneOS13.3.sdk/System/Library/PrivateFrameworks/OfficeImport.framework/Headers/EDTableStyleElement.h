/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EDCollection, EDDifferentialStyle, NSString;

__attribute__((visibility("hidden")))
@interface EDTableStyleElement : NSObject <Swift>

{
    EDCollection *mDifferentialStyles;
    int mType;
    unsigned int mBandSize;
    EDDifferentialStyle *mDifferentialStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)tableStyleElementWithResources:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)key;
- (int)type;
- (void)setType:(int)arg1;
- (id)initWithResources:(id)arg1;
- (void)setDifferentialStyle:(id)arg1;
- (id)differentialStyle;
- (unsigned int)bandSize;
- (void)setBandSize:(unsigned int)arg1;
- (void)setDifferentialStyleWithIndex:(unsigned long long)arg1;

@end
