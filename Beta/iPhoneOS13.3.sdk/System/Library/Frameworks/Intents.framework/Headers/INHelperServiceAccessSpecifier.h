/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface INHelperServiceAccessSpecifier : NSObject

{
    unsigned long long _accessLevel;
    NSString *_associatedAppBundleIdentifier;
}

@property (nonatomic, readonly) unsigned long long accessLevel;
@property (copy, nonatomic, readonly) NSString *associatedAppBundleIdentifier;

+ (void)initialize;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierAppropriateForCurrentProcess;
+ (id)accessSpecifierAppropriateForXPCConnection:(id)arg1;

- (id)debugDescription;
- (id)initWithAccessLevel:(unsigned long long)arg1 associatedAppBundleIdentifier:(id)arg2;

@end
