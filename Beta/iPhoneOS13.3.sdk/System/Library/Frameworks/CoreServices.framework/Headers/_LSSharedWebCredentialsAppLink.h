/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/LSAppLink.h>

@class _SWCServiceDetails;

__attribute__((visibility("hidden")))
@interface _LSSharedWebCredentialsAppLink : LSAppLink

{
    struct LSBinding _binding;
    _SWCServiceDetails *_serviceDetails;
}

@property (retain, nonatomic) _SWCServiceDetails *serviceDetails;
@property (readonly) struct LSBinding binding;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (_Bool)removeAllSettingsReturningError:(id *)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEnabled;
- (id).cxx_construct;
- (id)_SWCSpecifierForSettings;
- (id)_SWCSettingsReturningError:(id *)arg1;
- (_Bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)setEnabled:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setBrowserSettings:(id)arg1 error:(id *)arg2;
- (id)browserSettings;
- (_Bool)removeSettingsReturningError:(id *)arg1;

@end
