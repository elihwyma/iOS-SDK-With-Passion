/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _MXExtensionContainingAppProxy : NSObject

{
    NSMutableSet *_extensionUIIdentifiers;
    NSMutableSet *_extensionNonUIIdentifiers;
    NSString *_containingAppIdentifer;
}

@property (copy, nonatomic, readonly) NSString *containingAppIdentifer;
@property (retain, nonatomic) NSMutableSet *extensionNonUIIdentifiers;
@property (retain, nonatomic) NSMutableSet *extensionUIIdentifiers;

- (id)initWithContainingAppIdentifer:(id)arg1;

@end
