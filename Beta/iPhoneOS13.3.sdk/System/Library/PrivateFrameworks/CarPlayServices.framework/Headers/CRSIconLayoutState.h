/*
 Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CRSIconLayoutState : NSObject

{
    NSArray *_pages;
}

@property (nonatomic, readonly) NSArray *pages;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPages:(id)arg1;
- (id)iconOrder;

@end
