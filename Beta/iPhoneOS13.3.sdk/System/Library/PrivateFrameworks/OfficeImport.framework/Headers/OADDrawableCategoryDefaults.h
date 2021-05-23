/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADShapeProperties, OADTextBodyProperties, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface OADDrawableCategoryDefaults : NSObject

{
    OADShapeProperties *mShapeProperties;
    OADTextBodyProperties *mTextBodyProperties;
    OADTextListStyle *mTextListStyle;
}

- (id)init;
- (id)description;
- (id)initWithDefaults;
- (id)shapeProperties;
- (id)textBodyProperties;
- (id)textListStyle;
- (void)setShapeProperties:(id)arg1;
- (void)setTextBodyProperties:(id)arg1;
- (void)setTextListStyle:(id)arg1;

@end
