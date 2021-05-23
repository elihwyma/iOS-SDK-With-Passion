/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADShapeProperties, OADTextBody, ODDPointPropertySet;

__attribute__((visibility("hidden")))
@interface ODDPoint : NSObject

{
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

+ (void)addConnectionToPoint:(id)arg1 order:(unsigned long long)arg2 array:(id *)arg3;

- (id)init;
- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)propertySet;
- (id)shapeProperties;

@end
