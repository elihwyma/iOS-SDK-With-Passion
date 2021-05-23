/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSString;

@interface CKArchivedAnchoredPackage : NSObject

{
    NSString *_anchorPath;
    NSString *_packagePath;
    NSString *_UUID;
}

@property (retain, nonatomic) NSString *anchorPath;
@property (retain, nonatomic) NSString *packagePath;
@property (retain, nonatomic) NSString *UUID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;

@end
