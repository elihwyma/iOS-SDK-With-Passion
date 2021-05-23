/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/_NSCoreManagedObjectID.h>

__attribute__((visibility("hidden")))
@interface _NSScalarObjectID : _NSCoreManagedObjectID

- (void)dealloc;
- (long long)compare:(id)arg1;
- (id)initWithPK64:(long long)arg1;
- (long long)_referenceData64;
- (id)_referenceData;
- (long long)_getURIBytes:(char *)arg1 length:(long long)arg2;
- (id)_retainedURIString;
- (_Bool)_preferReferenceData64;

@end
