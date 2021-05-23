/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SCNProgramSemanticInfo : NSObject

{
    NSString *_semantic;
    NSDictionary *_options;
}

@property (copy, nonatomic) NSString *semantic;
@property (retain, nonatomic) NSDictionary *options;

+ (_Bool)supportsSecureCoding;
+ (id)infoWithSemantic:(id)arg1 options:(id)arg2;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
