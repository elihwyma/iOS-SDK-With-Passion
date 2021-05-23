/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CPListSection : NSObject

{
    NSString *_header;
    NSString *_sectionIndexTitle;
    NSArray *_items;
}

@property (copy, nonatomic, readonly) NSString *header;
@property (copy, nonatomic, readonly) NSString *sectionIndexTitle;
@property (copy, nonatomic, readonly) NSArray *items;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (long long)numberOfItems;
- (id)itemAtIndex:(long long)arg1;
- (id)initWithItems:(id)arg1 header:(id)arg2 sectionIndexTitle:(id)arg3;

@end
