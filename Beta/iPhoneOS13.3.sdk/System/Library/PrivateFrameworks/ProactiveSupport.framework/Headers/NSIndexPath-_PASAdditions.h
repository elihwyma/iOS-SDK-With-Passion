/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSIndexPath.h>

@class NSString;

@interface NSIndexPath (_PASAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_pas_fromVersionString:(id)arg1 withExceptions:(_Bool)arg2;
+ (id)_pas_fromVersionString:(id)arg1;
+ (id)_pas_fromVersionStringIfPossible:(id)arg1;

- (id)_pas_asVersionString;
- (_Bool)_pas_isLessThanVersionString:(id)arg1;
- (_Bool)_pas_isLessThanOrEqualToVersionString:(id)arg1;
- (_Bool)_pas_isEqualToVersionString:(id)arg1;
- (_Bool)_pas_isGreaterThanOrEqualToVersionString:(id)arg1;
- (_Bool)_pas_isGreaterThanVersionString:(id)arg1;
- (id)_pas_revivedString;

@end
