/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <Foundation/NSObject.h>

@class AXElement, NSString;

@interface AXElementAction : NSObject

{
    NSString *_name;
    long long _type;
    AXElement *_element;
    NSString *_customActionIdentifier;
    id _dragActivationToken;
    unsigned long long _medusaGesture;
    struct CGPoint _dropPoint;
}

@property (retain, nonatomic) AXElement *element;
@property (retain, nonatomic) NSString *customActionIdentifier;
@property (retain, nonatomic) id dragActivationToken;
@property (nonatomic) struct CGPoint dropPoint;
@property (nonatomic) unsigned long long medusaGesture;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long type;

@end
