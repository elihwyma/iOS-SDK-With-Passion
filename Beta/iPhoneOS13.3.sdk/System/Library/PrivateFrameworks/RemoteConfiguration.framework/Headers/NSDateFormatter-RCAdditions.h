/*
 Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

#import <NSDateFormatter.h>

@interface NSDateFormatter (RCAdditions)

+ (id)dateFormatterWithFormat:(id)arg1 forReuse:(_Bool)arg2;
+ (id)dateFormatterWithFormat:(id)arg1 localeIdentifier:(id)arg2 forReuse:(_Bool)arg3;
+ (id)dateFormatterWithFormat:(id)arg1 localeIdentifier:(id)arg2 timezone:(id)arg3 forReuse:(_Bool)arg4;
+ (id)dateFormatterWithFormat:(id)arg1 timezone:(id)arg2 forReuse:(_Bool)arg3;

- (id)initWithFormat:(id)arg1 localeIdentifier:(id)arg2;

@end
