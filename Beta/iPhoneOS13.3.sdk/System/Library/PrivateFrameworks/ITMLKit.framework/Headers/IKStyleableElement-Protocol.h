/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKViewElementStyleComposer, NSString;

@protocol IKStyleableElement;

@protocol IKStyleableElement <Swift>

@property (weak, nonatomic, readonly) id <IKStyleableElement> parentStyleableElement;
@property (copy, nonatomic, readonly) NSString *elementName;
@property (retain, nonatomic) IKViewElementStyleComposer *styleComposer;

- (unsigned short)objectForKeyedSubscript: /* Error: Ran out of types for this method. */;
- (unsigned short)setObject:forKeyedSubscript: /* Error: Ran out of types for this method. */;

@end
