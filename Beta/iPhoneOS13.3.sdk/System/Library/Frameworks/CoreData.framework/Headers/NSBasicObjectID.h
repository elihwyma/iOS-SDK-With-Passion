/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/_NSCoreManagedObjectID.h>

__attribute__((visibility("hidden")))
@interface NSBasicObjectID : _NSCoreManagedObjectID

{
    int _cd_rc;
    id _referenceData;
}

+ (char *)generatedNameSuffix;

- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)_referenceData;
- (id)_retainedURIString;

@end
