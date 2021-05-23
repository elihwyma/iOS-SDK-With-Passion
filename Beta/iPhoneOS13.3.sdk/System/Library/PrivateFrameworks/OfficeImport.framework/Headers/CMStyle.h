/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableString;

__attribute__((visibility("hidden")))
@interface CMStyle : NSObject <Swift>

{
    NSMutableDictionary *properties;
    NSMutableString *mStyleString;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributeForName:(id)arg1;
- (id)properties;
- (id)initWithStyle:(id)arg1;
- (id)propertyForName:(id)arg1;
- (void)appendPropertyForName:(id)arg1 intValue:(int)arg2;
- (void)appendPropertyForName:(id)arg1 stringWithColons:(id)arg2;
- (void)appendPropertyForName:(id)arg1 stringValue:(id)arg2;
- (void)addProperty:(id)arg1 forKey:(id)arg2;
- (void)appendPropertyForName:(id)arg1 length:(double)arg2 unit:(int)arg3;
- (void)appendSizeInfoFromRect:(struct CGRect)arg1;
- (void)appendPositionInfoFromRect:(struct CGRect)arg1;
- (void)appendDefaultBorderStyle;
- (void)appendPropertyForName:(id)arg1 floatValue:(float)arg2;
- (void)appendPropertyString:(id)arg1;
- (id)cssStyleString;
- (id)cacheFriendlyCSSStyleString;
- (void)appendPropertyForName:(id)arg1 color:(id)arg2;
- (void)addPropertiesToCSSStyleString:(id)arg1;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 unit:(int)arg3;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 lineHeight:(float)arg3 unit:(int)arg4;
- (void)appendOriginInfoFromPoint:(struct CGPoint)arg1;

@end
