/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKDOMElement, NSArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface IKDOMConditional : NSObject

{
    NSArray *_inclusionExpressions;
    NSArray *_exclusionExpressions;
    NSSet *_dependentPathStrings;
    IKDOMElement *_domElement;
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSArray *inclusionExpressions;
@property (copy, nonatomic, readonly) NSArray *exclusionExpressions;
@property (weak, nonatomic, readonly) IKDOMElement *domElement;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSSet *dependentPathStrings;

- (id)initWithDOMElement:(id)arg1;
- (_Bool)passesForDataItem:(id)arg1 default:(_Bool)arg2;
- (void)mutateWithDOMElement:(id)arg1;

@end
