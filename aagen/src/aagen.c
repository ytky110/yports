#include <stdio.h>
#include <string.h>

#define BUF 128  // buffer size for to draw chars
#define ROW_NUM 6 // number of row in one char
#define MAX_WIDTH 20 // maximum width of one character

char VER[] = "1.2.1";

char rows_a_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  "  ooooooo   ",
  "  ooooo888  ",
  "888    888  ",
  " 88ooo88 8o ",
  "            "
};
/*
char rows_a_down_[ROW_NUM][MAX_WIDTH] =
{
  "    88oo    ",
  "  ooooooo   ",
  "  ooooo888  ",
  "888    888  ",
  " 88ooo88 8o ",
  "            "
};
*/
char rows_b_[ROW_NUM][MAX_WIDTH] =
{
  "oooo        ",
  " 888ooooo   ",
  " 888    888 ",
  " 888    888 ",
  "o888ooo88   ",
  "            "
};

char rows_c_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  "  ooooooo   ",
  "888     888 ",
  "888         ",
  "  88ooo888  ",
  "            "
};

char rows_d_[ROW_NUM][MAX_WIDTH] =
{
  "       oooo ",
  "  ooooo888  ",
  "888    888  ",
  "888    888  ",
  "  88ooo888o ",
  "            "
};

char rows_e_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  " ooooooooo8 ",
  "888oooooo8  ",
  "888         ",
  "  88oooo888 ",
  "            "
};
/*
char rows_e_up_[ROW_NUM][MAX_WIDTH] =
{
  "    oo888   ",
  " ooooooooo8 ",
  "888oooooo8  ",
  "888         ",
  "  88oooo888 ",
  "            "
};

char rows_e_down_[ROW_NUM][MAX_WIDTH] =
{
  "   888oo    ",
  " ooooooooo8 ",
  "888oooooo8  ",
  "888         ",
  "  88oooo888 ",
  "            "
};

char rows_e_hat_[ROW_NUM][MAX_WIDTH] =
{
  "   o888o    ",
  " ooooooooo8 ",
  "888oooooo8  ",
  "888         ",
  "  88oooo888 ",
  "            "
};
*/
char rows_f_[ROW_NUM][MAX_WIDTH] =
{
  "  o888o ",
  "o888oo  ",
  " 888    ",
  " 888    ",
  "o888o   ",
  "        "
};

char rows_g_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  "  oooooooo8 ",
  "888    88o  ",
  " 888oo888o  ",
  "888     888 ",
  " 888ooo888  "
};

char rows_h_[ROW_NUM][MAX_WIDTH] =
{
  "oooo        ",
  " 888ooooo   ",
  " 888   888  ",
  " 888   888  ",
  "o888o o888o ",
  "            "
};

char rows_i_[ROW_NUM][MAX_WIDTH] =
{
  "o88   ",
  "oooo  ",
  " 888  ",
  " 888  ",
  "o888o ",
  "      "
};

char rows_j_[ROW_NUM][MAX_WIDTH] =
{
  " o88 ",
  "oooo ",
  " 888 ",
  " 888 ",
  " 888 ",
  "o88  "
};

char rows_k_[ROW_NUM][MAX_WIDTH] =
{
  "oooo        ",
  " 888  ooooo ",
  " 888o888    ",
  " 8888 88o   ",
  "o888o o888o ",
  "            "
};

char rows_l_[ROW_NUM][MAX_WIDTH] =
{
  "o888  ",
  " 888  ",
  " 888  ",
  " 888  ",
  "o888o ",
  "      "
};

char rows_m_[ROW_NUM][MAX_WIDTH] =
{
  "              ",
  "oo ooo oooo   ",
  " 888 888 888  ",
  " 888 888 888  ",
  "o888o888o888o ",
  "              "
};

char rows_n_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  "oo oooooo   ",
  " 888   888  ",
  " 888   888  ",
  "o888o o888o ",
  "            "
};

char rows_o_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  "  ooooooo   ",
  "888     888 ",
  "888     888 ",
  "  88ooo88   ",
  "            "
};

char rows_p_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  "ooooooooo   ",
  " 888    888 ",
  " 888    888 ",
  " 888ooo88   ",
  "o888        "
};

char rows_q_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  "  ooooooooo ",
  "888    888  ",
  "888    888  ",
  "  88ooo888  ",
  "       888o "
};

char rows_r_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  "oo oooooo   ",
  " 888    888 ",
  " 888        ",
  "o888o       ",
  "            "
};

char rows_s_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  " oooooooo8  ",
  "888ooooooo  ",
  "        888 ",
  "88oooooo88  ",
  "            "
};

char rows_t_[ROW_NUM][MAX_WIDTH] =
{
  "  o8   ",
  "o888oo ",
  " 888   ",
  " 888   ",
  "  888o ",
  "       "
};

char rows_u_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  "oooo  oooo  ",
  " 888   888  ",
  " 888   888  ",
  "  888o88 8o ",
  "            "
};

char rows_v_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  "oooo   oooo ",
  " 888   888  ",
  "  888 888   ",
  "    888     ",
  "            "
};

char rows_w_[ROW_NUM][MAX_WIDTH] =
{
  "              ",
  "oooo  o  oooo ",
  " 888 888 888  ",
  "  888888888   ",
  "   88   88    ",
  "              "
};

char rows_x_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  "oooo   oooo ",
  "  888o888   ",
  "  o88 88o   ",
  "o88o   o88o ",
  "            "
};

char rows_y_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  "oooo   oooo ",
  " 888   888  ",
  "  888 888   ",
  "    8888    ",
  " o8o888     "
};

char rows_z_[ROW_NUM][MAX_WIDTH] =
{
  "            ",
  "ooooooooooo ",
  "     8888   ",
  "  8888      ",
  "o888ooooooo ",
  "            "
};

char rows_A_[ROW_NUM][MAX_WIDTH] =
{
  "     o      ",
  "    888     ",
  "   8  88    ",
  "  8oooo88   ",
  "o88o  o888o ",
  "            "
};

char rows_B_[ROW_NUM][MAX_WIDTH] =
{
  "oooooooooo  ",
  " 888    888 ",
  " 888oooo88  ",
  " 888    888 ",
  "o888ooo888  ",
  "            "
};

char rows_C_[ROW_NUM][MAX_WIDTH] =
{
  "  oooooooo8 ",
  "o888     88 ",
  "888         ",
  "888o     oo ",
  " 888oooo88  ",
  "            "
};

char rows_D_[ROW_NUM][MAX_WIDTH] =
{
  "ooooooooo   ",
  " 888    88o ",
  " 888    888 ",
  " 888    888 ",
  "o888ooo88   ",
};

char rows_E_[ROW_NUM][MAX_WIDTH] =
{
  "ooooooooooo ",
  " 888    88  ",
  " 888ooo8    ",
  " 888    oo  ",
  "o888ooo8888 ",
  "            "
};

char rows_F_[ROW_NUM][MAX_WIDTH] =
{
  "ooooooooooo ",
  " 888    88  ",
  " 888ooo8    ",
  " 888        ",
  "o888o       ",
  "            "
};

char rows_G_[ROW_NUM][MAX_WIDTH] =
{
  "  ooooooo8  ",
  "o888    88  ",
  "888    oooo ",
  "888o    88  ",
  " 888ooo888  ",
  "            "
};

char rows_H_[ROW_NUM][MAX_WIDTH] =
{
  "ooooo ooooo ",
  " 888   888  ",
  " 888ooo888  ",
  " 888   888  ",
  "o888o o888o ",
  "            "
};

char rows_I_[ROW_NUM][MAX_WIDTH] =
{
  "ooooo ",
  " 888  ",
  " 888  ",
  " 888  ",
  "o888o ",
  "      "
};

char rows_J_[ROW_NUM][MAX_WIDTH] =
{
  "  ooooo ",
  "   888  ",
  "   888  ",
  "   888  ",
  "   888  ",
  "8o888   "
};

char rows_K_[ROW_NUM][MAX_WIDTH] =
{
  "oooo   oooo ",
  " 888  o88   ",
  " 888888     ",
  " 888  88o   ",
  "o888o o888o ",
  "            "
};

char rows_L_[ROW_NUM][MAX_WIDTH] =
{
  "ooooo       ",
  " 888        ",
  " 888        ",
  " 888      o ",
  "o888ooooo88 ",
  "            "
};

char rows_M_[ROW_NUM][MAX_WIDTH] =
{
  "oooo     oooo ",
  " 8888o   888  ",
  " 88 888o8 88  ",
  " 88  888  88  ",
  "o88o  8  o88o ",
  "              "
};

char rows_N_[ROW_NUM][MAX_WIDTH] =
{
  "oooo   oooo ",
  " 8888o  88  ",
  " 88 888o88  ",
  " 88   8888  ",
  "o88o    88  ",
  "            "
};

char rows_O_[ROW_NUM][MAX_WIDTH] =
{
  "  ooooooo   ",
  "o888   888o ",
  "888     888 ",
  "888o   o888 ",
  "  88ooo88   ",
  "            "
};

char rows_P_[ROW_NUM][MAX_WIDTH] =
{
  "oooooooooo  ",
  " 888    888 ",
  " 888oooo88  ",
  " 888        ",
  "o888o       ",
  "            "
};

char rows_Q_[ROW_NUM][MAX_WIDTH] =
{
  "  ooooooo   ",
  "o888   888o ",
  "888     888 ",
  "888o  8o888 ",
  "  88ooo88   ",
  "       88o8 "
};

char rows_R_[ROW_NUM][MAX_WIDTH] =
{
  "oooooooooo  ",
  " 888    888 ",
  " 888oooo88  ",
  " 888  88o   ",
  "o888o  88o8 ",
  "            "
};

char rows_S_[ROW_NUM][MAX_WIDTH] =
{
  " oooooooo8  ",
  "888         ",
  " 888oooooo  ",
  "        888 ",
  "o88oooo888  ",
  "            "
};

char rows_T_[ROW_NUM][MAX_WIDTH] =
{
  "ooooooooooo ",
  "88  888  88 ",
  "    888     ",
  "    888     ",
  "   o888o    ",
  "            "
};

char rows_U_[ROW_NUM][MAX_WIDTH] =
{
  "ooooo  oooo ",
  " 888    88  ",
  " 888    88  ",
  " 888    88  ",
  "  888oo88   ",
  "            "
};

char rows_V_[ROW_NUM][MAX_WIDTH] =
{
  "ooooo  oooo ",
  " 888    88  ",
  "  888  88   ",
  "   88888    ",
  "    888     ",
  "            "
};

char rows_W_[ROW_NUM][MAX_WIDTH] =
{
  "oooo     oooo ",
  " 88   88  88  ",
  "  88 888 88   ",
  "   888 888    ",
  "    8   8     ",
  "              "
};

char rows_X_[ROW_NUM][MAX_WIDTH] =
{
  "ooooo  oooo ",
  "  888  88   ",
  "    888     ",
  "   88 888   ",
  "o88o  o888o ",
  "            "
};

char rows_Y_[ROW_NUM][MAX_WIDTH] =
{
  "ooooo  oooo ",
  "  888  88   ",
  "    888     ",
  "    888     ",
  "   o888o    ",
  "            "
};

char rows_Z_[ROW_NUM][MAX_WIDTH] =
{
  "ooooooooooo ",
  "88    888   ",
  "    888     ",
  "  888    oo ",
  "o888oooo888 ",
  "            "
};

char rows_0_[ROW_NUM][MAX_WIDTH] =
{
  "  ooooooo   ",
  "o888  o888o ",
  "888  8  888 ",
  "888o8  o888 ",
  "  88ooo88   ",
  "            "
};

char rows_1_[ROW_NUM][MAX_WIDTH] =
{
  "  oo  ",
  "o888  ",
  " 888  ",
  " 888  ",
  "o888o ",
  "      "
};

char rows_2_[ROW_NUM][MAX_WIDTH] =
{
  "  ooooooo   ",
  "o88     888 ",
  "      o888  ",
  "   o888   o ",
  "o8888oooo88 ",
  "            "
};

char rows_3_[ROW_NUM][MAX_WIDTH] =
{
  "  ooooooo   ",
  "o88    888o ",
  "    88888o  ",
  "88o    o888 ",
  "  88ooo88   ",
  "            "
};

char rows_4_[ROW_NUM][MAX_WIDTH] =
{
  "      o88   ",
  "    o8888   ",
  "  o88 888   ",
  "o888oo888oo ",
  "     o888o  ",
  "            "
};

char rows_5_[ROW_NUM][MAX_WIDTH] =
{
  "oooooooooo  ",
  "888         ",
  "888888888o  ",
  "ooo    o888 ",
  "  88ooo88   ",
  "            "
};

char rows_6_[ROW_NUM][MAX_WIDTH] =
{
  "  ooooooo   ",
  "o88         ",
  "888888888o  ",
  "88o    o888 ",
  "  88ooo88   ",
  "            "
};

char rows_7_[ROW_NUM][MAX_WIDTH] =
{
  "ooooooooooo ",
  "888    888  ",
  "      888   ",
  "     888    ",
  "    888     ",
  "            "
};

char rows_8_[ROW_NUM][MAX_WIDTH] =
{
  "  ooooooo   ",
  "o888   888o ",
  " 888888888  ",
  "888o   o888 ",
  "  88ooo88   ",
  "            "
};

char rows_9_[ROW_NUM][MAX_WIDTH] =
{
  " ooooooo    ",
  "888    88o  ",
  " 888oo8888  ",
  "      888   ",
  "   o888     ",
  "            "
};

char rows_exclamation_mark_[ROW_NUM][MAX_WIDTH] =
{
  " oo  ",
  "8888 ",
  "8888 ",
  " 88  ",
  " oo  ",
  "     "
};

char rows_question_mark_[ROW_NUM][MAX_WIDTH] =
{
  "o8888888o   ",
  "888     888 ",
  "     o888   ",
  "    888     ",
  "    ooo     ",
  "            "
};

char rows_dot_[ROW_NUM][MAX_WIDTH] =
{
  "    ",
  "    ",
  "    ",
  "ooo ",
  "888 ",
  "    "
};

char rows_comma_[ROW_NUM][MAX_WIDTH] =
{
  "     ",
  "     ",
  "     ",
  " ooo ",
  " 888 ",
  "o88  "
};

char rows_colon_[ROW_NUM][MAX_WIDTH] =
{
  "    ",
  "ooo ",
  "888 ",
  "ooo ",
  "888 ",
  "    "
};

char rows_semi_colon_[ROW_NUM][MAX_WIDTH] =
{
  " ooo ",
  " 888 ",
  " ooo ",
  " 888 ",
  "o88  ",
  "     "
};

char rows_apostrophe_[ROW_NUM][MAX_WIDTH] =
{
  " 888 ",
  " 888 ",
  "o88  ",
  "     ",
  "     ",
  "     "
};

char rows_quotation_mark_[ROW_NUM][MAX_WIDTH] =
{
  "888 888 ",
  "888 888 ",
  "        ",
  "        ",
  "        ",
  "        "
};

char rows_under_score_[ROW_NUM][MAX_WIDTH] =
{
  "             ",
  "             ",
  "             ",
  "             ",
  "             ",
  "oooooooooooo "
};

char rows_open_paren_[ROW_NUM][MAX_WIDTH] =
{
  "  o88 ",
  " 888  ",
  "888   ",
  "888   ",
  " 888  ",
  "  88o "
};

char rows_close_paren_[ROW_NUM][MAX_WIDTH] =
{
  "88o   ",
  " 888  ",
  "  888 ",
  "  888 ",
  " 888  ",
  "o88   "
};

char rows_plus_[ROW_NUM][MAX_WIDTH] =
{
  "    888     ",
  "    888     ",
  "oooo888oooo ",
  "    888     ",
  "    888     ",
  "            "
};

char rows_minus_[ROW_NUM][MAX_WIDTH] =
{
  "          ",
  "          ",
  "ooooooooo ",
  "          ",
  "          ",
  "          "
};

char rows_equal_[ROW_NUM][MAX_WIDTH] =
{
  "          ",
  "ooooooooo ",
  "          ",
  "ooooooooo ",
  "          ",
  "          "
};

char rows_slash_[ROW_NUM][MAX_WIDTH] =
{
  "        o88 ",
  "       o88  ",
  "     o88    ",
  "   o88      ",
  " o88        ",
  "o88         "
};

char rows_back_slash_[ROW_NUM][MAX_WIDTH] =
{
  "88o         ",
  " 88o        ",
  "   88o      ",
  "     88o    ",
  "       88o  ",
  "        88o "
};

char rows_dollar_sign_[ROW_NUM][MAX_WIDTH] =
{
  "   oo oo    ",
  " oo88o88o8  ",
  "88o88o88oo  ",
  "   88 88 88 ",
  "o8o88o88o8  ",
  "   88 88    "
};

char rows_open_brace_[ROW_NUM][MAX_WIDTH] =
{
  "  o8888 ",
  " 888    ",
  "o888    ",
  "888o    ",
  " 888    ",
  "  8888o "
};

char rows_close_brace_[ROW_NUM][MAX_WIDTH] =
{
  "8888o   ",
  "   888  ",
  "   888o ",
  "   o888 ",
  "   888  ",
  "o8888   "
};

char rows_open_bracket_[ROW_NUM][MAX_WIDTH] =
{
  "888888 ",
  "888    ",
  "888    ",
  "888    ",
  "888    ",
  "888888 "
};

char rows_close_bracket_[ROW_NUM][MAX_WIDTH] =
{
  "888888 ",
  "   888 ",
  "   888 ",
  "   888 ",
  "   888 ",
  "888888 "
};

char rows_hash_[ROW_NUM][MAX_WIDTH] =
{
  " ooo   ooo  ",
  "o888ooo888o ",
  " 888   888  ",
  "o888ooo888o ",
  " 888   888  ",
  "            "
};

char rows_percent_[ROW_NUM][MAX_WIDTH] =
{
  " oo     ooo ",
  "8  8  o88   ",
  " 88 o88 oo  ",
  "  o88  8  8 ",
  "o88     88  ",
  "            "
};

char rows_and_[ROW_NUM][MAX_WIDTH] =
{
  " oooooo     ",
  "888  888    ",
  " 88o88  o88 ",
  "888  88o8   ",
  " 888o88 88o ",
  "            "
};

char rows_tilda_[ROW_NUM][MAX_WIDTH] =
{
  " o888o o888 ",
  "888 888888  ",
  "            ",
  "            ",
  "            ",
  "            "
};

char rows_pipe_[ROW_NUM][MAX_WIDTH] =
{
  "888 ",
  "888 ",
  "888 ",
  "888 ",
  "888 ",
  "888 "
};

char rows_asterisk_[ROW_NUM][MAX_WIDTH] =
{
  " oo    oo  ",
  "  88oo88   ",
  "o88888888o ",
  "  oo88oo   ",
  " o88  88o  ",
  "           "
};

char rows_greater_[ROW_NUM][MAX_WIDTH] =
{
  "    o88 ",
  "  o88   ",
  "o88     ",
  "  88o   ",
  "    88o ",
  "        "
};

char rows_less_[ROW_NUM][MAX_WIDTH] =
{
  "88o      ",
  "   88o   ",
  "     88o ",
  "   o88   ",
  " o88     ",
  "         "
};

char rows_hat_[ROW_NUM][MAX_WIDTH] =
{
  "    o      ",
  "   o8o     ",
  "  o888o    ",
  " o88o88o   ",
  "o8888888o  ",
  "           "
};

char rows_at_[ROW_NUM][MAX_WIDTH] =
{
  "o8888888o   ",
  "888  oo 888 ",
  "888 8 8 888 ",
  "888  88o88  ",
  " 888ooooo8  ",
  "            "
};

char rows_back_tick_[ROW_NUM][MAX_WIDTH] =
{
  "888  ",
  "888  ",
  " 88o ",
  "     ",
  "     ",
  "     "
};

char rows_SPCE_[ROW_NUM][MAX_WIDTH] =
{
  "      ",
  "      ",
  "      ",
  "      ",
  "      ",
  "      "
};

char rows_NULL_[ROW_NUM][MAX_WIDTH] =
{
  "|---------| ",
  "|  x   x  | ",
  "|   xxx   | ",
  "|   xxx   | ",
  "|  x   x  | ",
  "|---------| "
};

void printrow(
  char c,
  int row_n
){
  switch (c)
    {
      case 'a': printf("%s", rows_a_[row_n]);     break;
      case 'b': printf("%s", rows_b_[row_n]);     break;
      case 'c': printf("%s", rows_c_[row_n]);     break;
      case 'd': printf("%s", rows_d_[row_n]);     break;
      case 'e': printf("%s", rows_e_[row_n]);     break;
      case 'f': printf("%s", rows_f_[row_n]);     break;
      case 'g': printf("%s", rows_g_[row_n]);     break;
      case 'h': printf("%s", rows_h_[row_n]);     break;
      case 'i': printf("%s", rows_i_[row_n]);     break;
      case 'j': printf("%s", rows_j_[row_n]);     break;
      case 'k': printf("%s", rows_k_[row_n]);     break;
      case 'l': printf("%s", rows_l_[row_n]);     break;
      case 'm': printf("%s", rows_m_[row_n]);     break;
      case 'n': printf("%s", rows_n_[row_n]);     break;
      case 'o': printf("%s", rows_o_[row_n]);     break;
      case 'p': printf("%s", rows_p_[row_n]);     break;
      case 'q': printf("%s", rows_q_[row_n]);     break;
      case 'r': printf("%s", rows_r_[row_n]);     break;
      case 's': printf("%s", rows_s_[row_n]);     break;
      case 't': printf("%s", rows_t_[row_n]);     break;
      case 'u': printf("%s", rows_u_[row_n]);     break;
      case 'v': printf("%s", rows_v_[row_n]);     break;
      case 'w': printf("%s", rows_w_[row_n]);     break;
      case 'x': printf("%s", rows_x_[row_n]);     break;
      case 'y': printf("%s", rows_y_[row_n]);     break;
      case 'z': printf("%s", rows_z_[row_n]);     break;
      case 'A': printf("%s", rows_A_[row_n]);     break;
      case 'B': printf("%s", rows_B_[row_n]);     break;
      case 'C': printf("%s", rows_C_[row_n]);     break;
      case 'D': printf("%s", rows_D_[row_n]);     break;
      case 'E': printf("%s", rows_E_[row_n]);     break;
      case 'F': printf("%s", rows_F_[row_n]);     break;
      case 'G': printf("%s", rows_G_[row_n]);     break;
      case 'H': printf("%s", rows_H_[row_n]);     break;
      case 'I': printf("%s", rows_I_[row_n]);     break;
      case 'J': printf("%s", rows_J_[row_n]);     break;
      case 'K': printf("%s", rows_K_[row_n]);     break;
      case 'L': printf("%s", rows_L_[row_n]);     break;
      case 'M': printf("%s", rows_M_[row_n]);     break;
      case 'N': printf("%s", rows_N_[row_n]);     break;
      case 'O': printf("%s", rows_O_[row_n]);     break;
      case 'P': printf("%s", rows_P_[row_n]);     break;
      case 'Q': printf("%s", rows_Q_[row_n]);     break;
      case 'R': printf("%s", rows_R_[row_n]);     break;
      case 'S': printf("%s", rows_S_[row_n]);     break;
      case 'T': printf("%s", rows_T_[row_n]);     break;
      case 'U': printf("%s", rows_U_[row_n]);     break;
      case 'V': printf("%s", rows_V_[row_n]);     break;
      case 'W': printf("%s", rows_W_[row_n]);     break;
      case 'X': printf("%s", rows_X_[row_n]);     break;
      case 'Y': printf("%s", rows_Y_[row_n]);     break;
      case 'Z': printf("%s", rows_Z_[row_n]);     break;
      case '0': printf("%s", rows_0_[row_n]);     break;
      case '1': printf("%s", rows_1_[row_n]);     break;
      case '2': printf("%s", rows_2_[row_n]);     break;
      case '3': printf("%s", rows_3_[row_n]);     break;
      case '4': printf("%s", rows_4_[row_n]);     break;
      case '5': printf("%s", rows_5_[row_n]);     break;
      case '6': printf("%s", rows_6_[row_n]);     break;
      case '7': printf("%s", rows_7_[row_n]);     break;
      case '8': printf("%s", rows_8_[row_n]);     break;
      case '9': printf("%s", rows_9_[row_n]);     break;
/*    case 'à': printf("%s", rows_a_down_[row_n]);           break;
      case 'é': printf("%s", rows_e_up_[row_n]);             break;
      case 'è': printf("%s", rows_e_down_[row_n]);           break;
      case 'ê': printf("%s", rows_e_hat_[row_n]);            break;
*/    case '!': printf("%s", rows_exclamation_mark_[row_n]); break;
      case '?': printf("%s", rows_question_mark_[row_n]);    break;
      case '.': printf("%s", rows_dot_[row_n]);              break;
      case ',': printf("%s", rows_comma_[row_n]);            break;
      case ':': printf("%s", rows_colon_[row_n]);            break;
      case ';': printf("%s", rows_semi_colon_[row_n]);       break;
      case '\'': printf("%s", rows_apostrophe_[row_n]);      break;
      case '"': printf("%s", rows_quotation_mark_[row_n]);   break;
      case '_': printf("%s", rows_under_score_[row_n]);      break;
      case '(': printf("%s", rows_open_paren_[row_n]);       break;
      case ')': printf("%s", rows_close_paren_[row_n]);      break;
      case '+': printf("%s", rows_plus_[row_n]);             break;
      case '-': printf("%s", rows_minus_[row_n]);            break;
      case '=': printf("%s", rows_equal_[row_n]);            break;
      case '/': printf("%s", rows_slash_[row_n]);            break;
      case '\\': printf("%s", rows_back_slash_[row_n]);      break;
      case '$': printf("%s", rows_dollar_sign_[row_n]);      break;
      case '{': printf("%s", rows_open_brace_[row_n]);       break;
      case '}': printf("%s", rows_close_brace_[row_n]);      break;
      case '[': printf("%s", rows_open_bracket_[row_n]);     break;
      case ']': printf("%s", rows_close_bracket_[row_n]);    break;
      case '#': printf("%s", rows_hash_[row_n]);             break;
      case '%': printf("%s", rows_percent_[row_n]);          break;
      case '&': printf("%s", rows_and_[row_n]);              break;
      case '~': printf("%s", rows_tilda_[row_n]);            break;
      case '|': printf("%s", rows_pipe_[row_n]);             break;
      case '*': printf("%s", rows_asterisk_[row_n]);         break;
      case '<': printf("%s", rows_greater_[row_n]);          break;
      case '>': printf("%s", rows_less_[row_n]);             break;
      case '^': printf("%s", rows_hat_[row_n]);              break;
      case '@': printf("%s", rows_at_[row_n]);               break;
      case '`': printf("%s", rows_back_tick_[row_n]);               break;
      case ' ': printf("%s", rows_SPCE_[row_n]);             break;
      default : printf("%s", rows_NULL_[row_n]);             break;
    }
}

void drawchar(
  const char* todraw
){
  for (int i = 0; i < ROW_NUM; i++)
    {
      for (int j = 0; todraw[j]; j++)
        printrow(todraw[j], i);
      printf("\n");
    }
}

int main(
  int argc,
  char* argv[]
){
  char todraw[BUF];
  argc--;

  if (argc == 0)
    {
      fprintf(stderr, "aagen: too few argument\n");
      return 2;
    }
  else if (argc > 1)
    {
      fprintf(stderr, "aagen: too much argument\n");
      return 2;
    }

  if (strcmp(argv[1], "--help") == 0)
    {
      printf("aagen  %s    by Yutaka Goy\n", VER);
      printf("\n");
      printf("    Generate AA of selected string in first argument.\n");
      printf("    options:\n");
      printf("        --help      print this help\n");
      printf("        --version   print the version\n");
      printf("        --stdin     read input from stdin\n");
      return 0;
    }
  else if (strcmp(argv[1], "--version") == 0)
    {
      printf("aagen  %s\n", VER);
      printf("(AA Generator AAGEN)\n");
      printf("\n");
      printf("Written by Yutaka Goy\n");
      printf("on 2025-6-27, in C\n");
      return 0;
    }
  else if (strcmp(argv[1], "--stdin") == 0)
    scanf("%s", todraw);

  else
    strcpy(todraw, argv[1]);

  drawchar(todraw);
}
