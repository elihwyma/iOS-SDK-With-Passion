/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

#import <CoreData/Swift-Protocol.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface NSXPCStoreManagedObjectArchivingToken : NSObject <Swift>

{
    NSURL *_managedObjectReferenceURI;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURI:(id)arg1;
- (id)URI;

@end
