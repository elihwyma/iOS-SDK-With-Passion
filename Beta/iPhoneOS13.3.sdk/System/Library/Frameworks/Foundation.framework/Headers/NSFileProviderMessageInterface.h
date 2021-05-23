/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface NSFileProviderMessageInterface : NSObject <Swift>

{
    NSString *_name;
    NSString *_itemIdentifier;
    NSString *_providerIdentifier;
}

@property (copy) NSString *itemIdentifier;
@property (copy) NSString *providerIdentifier;
@property (copy, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 itemIdentifier:(id)arg2 providerIdentifier:(id)arg3;

@end
