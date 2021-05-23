/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class FBSDisplayConfiguration, NSArray, NSDate, NSMutableArray, NSString;

@interface FBSDisplayLayout : NSObject <Swift>

{
    NSMutableArray *_elements;
    FBSDisplayConfiguration *_displayConfiguration;
    long long _interfaceOrientation;
    long long _backlightLevel;
    NSDate *_timestamp;
}

@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long displayBacklightLevel;
@property (copy, nonatomic, readonly) NSArray *elements;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (long long)displayType;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)addElement:(id)arg1;
- (id)display;
- (struct CGRect)referenceBounds;
- (id)_initWithElements:(id)arg1;
- (void)_sortElements;
- (void)removeElement:(id)arg1;
- (void)finalizeLayout;

@end
