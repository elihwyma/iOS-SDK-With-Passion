/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BasicAceContext : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedBasicAceContext;

- (Class)classWithClassName:(id)arg1 group:(id)arg2;
- (id)aceObjectWithDictionary:(id)arg1;
- (void)registerGroupAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2;

@end
