@interface YTSlimVideoScrollableDetailsActionsView : UIView
@end

@interface YTSlimDetailsActionView : UIView
@end

@interface YTFormattedStringLabel : UILabel
@end

@interface YTLocalPlaybackController : NSObject
- (NSString *)currentVideoID;
@end

@interface YTUserDefaults : NSObject
- (long long)appThemeSetting;
@end