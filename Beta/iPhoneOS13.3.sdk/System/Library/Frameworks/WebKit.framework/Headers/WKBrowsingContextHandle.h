/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@interface WKBrowsingContextHandle : NSObject

{
    ObjectIdentifier_8136369e _pageID;
}

@property (nonatomic, readonly, getter=_pageID) ObjectIdentifier_8136369e pageID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)_initWithPageID:(ObjectIdentifier_8136369e)arg1;

@end
