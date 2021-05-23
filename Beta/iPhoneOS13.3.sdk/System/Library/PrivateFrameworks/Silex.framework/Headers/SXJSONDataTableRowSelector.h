/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONDataTableSelector.h>

@class NSString;

@interface SXJSONDataTableRowSelector : SXJSONDataTableSelector

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long rowIndex;
@property (nonatomic, readonly) unsigned long long columnIndex;
@property (nonatomic, readonly) NSString *descriptor;
@property (nonatomic, readonly) unsigned long long even;
@property (nonatomic, readonly) unsigned long long odd;

- (unsigned long long)weightForSelectorKey:(id)arg1;
- (unsigned long long)evenWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)oddWithValue:(id)arg1 withType:(int)arg2;

@end
