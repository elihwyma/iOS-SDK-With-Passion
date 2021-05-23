/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface OADImageRecolorInfo : NSObject

{
    NSDictionary *mColors;
    NSDictionary *mFills;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)colors;
- (id)initWithColors:(id)arg1 fills:(id)arg2;
- (id)fills;

@end
