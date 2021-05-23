/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@interface _NSBundleODRTag : NSObject <Swift>

{
    double _preservationPriority;
    _Bool _alwaysPreserved;
}

@property double preservationPriority;
@property _Bool alwaysPreserved;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
