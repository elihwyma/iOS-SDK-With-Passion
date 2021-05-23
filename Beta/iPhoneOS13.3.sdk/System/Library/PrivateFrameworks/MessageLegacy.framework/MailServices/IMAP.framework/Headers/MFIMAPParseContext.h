/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class MFIMAPConnection, MFIMAPResponse;

@interface MFIMAPParseContext : NSObject

{
    MFIMAPConnection *_connection;
    MFIMAPResponse *_response;
    const char *_start;
    const char *_end;
    const char *_originalStart;
    const char *_originalEnd;
    const char *_lastLoggedChar;
    _Bool _invalid;
}

+ (_Bool)hadWarningOrError;
+ (void)resetWarningOrError;

- (void)dealloc;
- (_Bool)match:(const char *)arg1;
- (_Bool)isValid;
- (const char *)start;
- (void)increment;
- (id)connection;
- (const char *)end;
- (id)response;
- (void)setStart:(const char *)arg1;
- (void)setEnd:(const char *)arg1;
- (unsigned char)lookAhead;
- (_Bool)parseSpace;
- (void)emitWarning:(id)arg1;
- (id)copyNumber;
- (void)emitError:(id)arg1;
- (id)copyMessageSet;
- (id)copyQuotedString;
- (id)copyStringFrom:(const char *)arg1 to:(const char *)arg2 withCaseOption:(int)arg3;
- (_Bool)getNumber:(unsigned long long *)arg1;
- (_Bool)literalWithResponseConsumer:(id)arg1 section:(id)arg2;
- (id)copyLiteral;
- (id)copyLiteralString;
- (id)copyAtom;
- (struct __CFArray *)copyArrayAllowingNulls:(_Bool)arg1;
- (id)initWithConnection:(id)arg1 response:(id)arg2 start:(const char *)arg3 end:(const char *)arg4;
- (void)logReadChars;
- (_Bool)match:(const char *)arg1 upToSpecial:(const char *)arg2;
- (id)copyNilOrString;
- (id)copyAString;
- (id)copyDateTime;
- (id)copyArray;
- (const char *)nextSeparator;

@end
