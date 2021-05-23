/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface SSSection : NSObject <Swift>

{
    _Bool _expanded;
    NSMutableArray *_items;
    id _sectionIdentifier;
    NSString *_header;
    NSString *_footer;
    Class _headerClass;
    Class _footerClass;
    double _headerHeight;
    double _footerHeight;
}

@property (nonatomic, getter=isExpanded) _Bool expanded;
@property (nonatomic, readonly) NSMutableArray *items;
@property (retain, nonatomic) id sectionIdentifier;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *footer;
@property (weak, nonatomic) Class headerClass;
@property (weak, nonatomic) Class footerClass;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;

+ (id)sectionWithItems:(id)arg1;
+ (id)sectionWithItems:(id)arg1 header:(id)arg2 footer:(id)arg3 identifier:(id)arg4;
+ (id)sectionWithNumberOfItems:(unsigned long long)arg1;
+ (id)sectionWithNumberOfItems:(unsigned long long)arg1 header:(id)arg2 footer:(id)arg3 identifier:(id)arg4;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)numberOfItems;
- (id)itemAtIndex:(unsigned long long)arg1;

@end
