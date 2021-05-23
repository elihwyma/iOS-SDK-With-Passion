/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface _MXExtensionLookupPolicy : NSObject

{
    NSPredicate *_extensionPredicate;
}

@property (retain, nonatomic) NSPredicate *extensionPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPredicate:(id)arg1;

@end
