/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface BRGeometry : NSObject

{
    _Bool _hasAmbiguousLayout;
    _Bool _isClipped;
    NSString *_name;
    NSString *_contentDescription;
    NSArray *_subitems;
    struct CGRect _absoluteFrame;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CGRect absoluteFrame;
@property (nonatomic) _Bool hasAmbiguousLayout;
@property (nonatomic) _Bool isClipped;
@property (copy, nonatomic) NSString *contentDescription;
@property (copy, nonatomic) NSArray *subitems;

+ (void)initialize;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)initWithView:(id)arg1;
- (id)recursiveDescription;
- (id)initWithView:(id)arg1 rootView:(id)arg2;
- (id)gatherSubviews:(id)arg1;
- (_Bool)isValidForGeometryValidation:(unsigned long long)arg1 offendingGeometry:(id *)arg2;
- (_Bool)isEqualToTemplate:(id)arg1 diagnostic:(id *)arg2;

@end
