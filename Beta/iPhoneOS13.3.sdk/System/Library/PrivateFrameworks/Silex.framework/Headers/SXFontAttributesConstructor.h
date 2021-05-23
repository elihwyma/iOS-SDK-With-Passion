/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXFontIndex;

@interface SXFontAttributesConstructor : NSObject

{
    id <SXFontIndex> _fontIndex;
}

@property (nonatomic, readonly) id <SXFontIndex> fontIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)fontAttributesForFontDescriptions:(id)arg1;
- (id)fontNameForAttributes:(id)arg1 size:(long long)arg2;
- (id)initWithFontIndex:(id)arg1;
- (long long)weightByApplyingWeightLabels:(id)arg1 toWeight:(long long)arg2;

@end
