/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WLMessageSMILPart : NSObject

{
    NSString *_elementName;
    NSDictionary *_attributes;
}

@property (nonatomic, readonly) NSString *elementName;
@property (nonatomic, readonly) NSDictionary *attributes;

- (id)fileName;
- (id)initWithElementName:(id)arg1 attributes:(id)arg2;

@end
