/*
 Image: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
 */

@class CLIntersiloUniverse, NSString;

@protocol CLSettingsManagerProtocol;

@interface CLSettingsMirror

{
    _Bool _valid;
    CDUnknownBlockType _settingsChangeHandler;
    id <CLSettingsManagerProtocol> _manager;
    CLIntersiloUniverse *_universe;
}

@property (retain, nonatomic) id <CLSettingsManagerProtocol> manager;
@property (retain, nonatomic) CLIntersiloUniverse *universe;
@property (copy, nonatomic) CDUnknownBlockType settingsChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool valid;

- (void)dealloc;
- (void)invalidate;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)didUpdateSettings:(id)arg1;
- (id)initInUniverse:(id)arg1;
- (void)setShort:(short)arg1 forKey:(id)arg2;
- (void)setInt:(int)arg1 forKey:(id)arg2;

@end
