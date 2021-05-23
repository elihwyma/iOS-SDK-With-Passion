/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEPolicyResult, NSArray;

@interface NEPolicy : NSObject

{
    unsigned int _order;
    NEPolicyResult *_result;
    NSArray *_conditions;
}

@property unsigned int order;
@property (retain) NEPolicyResult *result;
@property (copy) NSArray *conditions;

- (id)init;
- (id)description;
- (_Bool)validate;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithOrder:(unsigned int)arg1 result:(id)arg2 conditions:(id)arg3;
- (_Bool)addTLVsToMessage:(id)arg1;

@end
