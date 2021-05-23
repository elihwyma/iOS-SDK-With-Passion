/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <PrototypeTools/PTSRow.h>

@class NSString, PTSettings;

@interface PTDrillDownRow : PTSRow

{
    PTSettings *_childSettings;
    NSString *_childKeyPath;
}

@property (nonatomic, readonly) NSString *childKeyPath;

+ (id)rowWithTitle:(id)arg1 childSettingsKeyPath:(id)arg2;
+ (id)rowWithTitleKeyPath:(id)arg1 childSettingsKeyPath:(id)arg2;

- (void)dealloc;
- (id)value;
- (void)setSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)initWithChildKeyPath:(id)arg1;

@end
