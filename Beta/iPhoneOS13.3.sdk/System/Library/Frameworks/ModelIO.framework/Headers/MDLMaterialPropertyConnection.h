/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class MDLMaterialProperty, NSString;

@interface MDLMaterialPropertyConnection : NSObject

{
    MDLMaterialProperty *_input;
    MDLMaterialProperty *_output;
    NSString *_name;
}

@property (weak, nonatomic, readonly) MDLMaterialProperty *output;
@property (weak, nonatomic, readonly) MDLMaterialProperty *input;
@property (copy, nonatomic) NSString *name;

- (id)initWithOutput:(id)arg1 input:(id)arg2;

@end
